//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file eventgenerator/HepMC/HepMCEx02/include/H02PrimaryGeneratorMessenger.hh
/// \brief Definition of the H02PrimaryGeneratorMessenger class
//
//   $Id: H02PrimaryGeneratorMessenger.hh 77801 2013-11-28 13:33:20Z gcosmo $
//
#ifndef H02_PRIMARY_GENERATOR_MESSENGER_H
#define H02_PRIMARY_GENERATOR_MESSENGER_H

#include "globals.hh"
#include "G4UImessenger.hh"

class B4PrimaryGeneratorAction;
class G4UIdirectory;
class G4UIcommand;
class G4UIcmdWithoutParameter;
class G4UIcmdWithABool;
class G4UIcmdWithAnInteger;
class G4UIcmdWithAString;

class H02PrimaryGeneratorMessenger : public G4UImessenger {
public:
  H02PrimaryGeneratorMessenger(B4PrimaryGeneratorAction* genaction);
//   H02PrimaryGeneratorMessenger(B4PrimaryGeneratorAction* genaction, char*);
  ~H02PrimaryGeneratorMessenger();

  void SetNewValue(G4UIcommand* command, G4String newValues);
  G4String GetCurrentValue(G4UIcommand* command);

private:
  B4PrimaryGeneratorAction* primaryAction;

  G4UIdirectory* dir;
  G4UIcmdWithAString* select;

};

#endif
