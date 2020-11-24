#include <iostream>
#include "TVector3.h"



class SCEPCal_GeometryHelper
{
    public:
        SCEPCal_GeometryHelper();
        virtual ~SCEPCal_GeometryHelper(){};
        
                
        double m_innerR;
        int m_nBarrelEtaSeg;
        int m_nBarrelPhiSeg;
        double m_deltaThetaBarrel;
        double m_phiUnitBarrel;
        
        int m_chOffset;
        int m_nEndcapRings;        
        double m_deltaThetaEndcap;
        
        int m_nBarrelTiming_Z;
        int m_nBarrelTiming_PhiSeg;
        double m_phiUnitTimingBarrel;
        double m_BarrelTiming_IR;
        double m_BarrelTiming_OR;
        double m_barLength;
        double m_barWidth;
        double m_nBars;
        int m_nEndcapModulePerLine;
        int m_endOIDR[162];
        
        TVector3 GetCrystalVec(long int index);
        TVector3 GetCrystalTimingVec(long int index, int layer_ID);
        TVector3 GetCrystalTimingBothVec(long int index_1, long int index_2);
        
        
        int GetTimingPhiSliceID(long int index);
        int GetTimingModuleID  (long int index);
        int GetTimingCrystalID (long int index);
        
        void PrintGeometry();
        
//     private:

};
    
