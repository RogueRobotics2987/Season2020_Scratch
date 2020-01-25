/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ExaDefaultCmd.h"
#include <iostream>

ExaDefaultCmd::ExaDefaultCmd(ExampleSubsystem* subsystem)
    : m_subsystem{subsystem} {
        AddRequirements(m_subsystem);
    }

void ExaDefaultCmd::Initialize() {
    std::cout << "Our Default Command, Initializing." << std::endl;
}
void ExaDefaultCmd::Execute() {
    //std::cout << "Our Default Command, Executing..." << std::endl;
}
