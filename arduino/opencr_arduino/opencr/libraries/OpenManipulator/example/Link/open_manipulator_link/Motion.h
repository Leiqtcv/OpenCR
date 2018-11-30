/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: Hye-Jong KIM */

#ifndef MOTION_H_
#define MOTION_H_

#include "Link.h"

//////////////////Motion num////////////////
#define MAX_MOTION_NUM 102
////////////////////////////////////////////

//////////////////////fleg///////////////////
bool motion    = false;
bool repeat    = true;
bool IK_motion = true;
////////////////////////////////////////////

///////////////////storage//////////////////
double motion_storage[MAX_MOTION_NUM][5] = {0.0, };
const double initial_motion_set[56][5] = { // time, joint1, joint2, joint3, grip
////////////////////////////////////STEP1///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.04, -1.74, -2.39,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0,  0.20, -2.04, -3.10,  0.0},    //move
                                                { 1.0,  0.20, -1.55, -2.13,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0,  0.20, -2.04, -3.10,  0.0},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP2///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.04, -1.74, -2.39,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0, -0.20, -2.04, -3.10,  0.0},    //move
                                                { 1.0, -0.20, -1.55, -2.13,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0, -0.20, -2.04, -3.10,  0.0},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP3///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.03, -1.69, -2.31,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0,  0.15, -1.71, -2.79,  0.0},    //move
                                                { 1.0,  0.14, -1.34, -2.18,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0,  0.15, -1.71, -2.79,  0.0},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP4///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.03, -1.62, -2.22,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0, -0.15, -1.71, -2.80,  0.0},    //move
                                                { 1.0, -0.15, -1.34, -2.19,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0, -0.15, -1.71, -2.80,  0.0},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP5///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.03, -1.62, -2.22,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0, -0.15, -1.71, -2.80,  0.0},    //move
                                                { 1.0, -0.15, -1.34, -2.19,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0, -0.15, -1.71, -2.80,  0.0},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP6///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.03, -1.62, -2.22,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0, -0.15, -1.71, -2.80,  0.0},    //move
                                                { 1.0, -0.15, -1.34, -2.19,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0, -0.15, -1.71, -2.80,  0.0},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP7///////////////////////////////////////////
                                                { 2.0,  1.04, -1.99, -2.87,  0.0},    //move
                                                { 1.0,  1.03, -1.62, -2.22,  0.0},    //down
                                                { 0.5,  0.00,  0.00,  0.00,  1.0},    //pick
                                                { 1.0,  1.04, -1.99, -2.87,  0.0},    //up
                                                { 2.0, -0.15, -1.71, -2.80,  0.0},    //move
                                                { 1.0, -0.15, -1.34, -2.19,  0.0},    //down
                                                { 2.0,  0.00,  0.00,  0.00, -1.0},    //place
                                                { 1.0, -0.15, -1.71, -2.80,  0.0}  
/////////////////////////////////////////////////////////////////////////////////////
                                                };
const double initial_IKmotion_set[MAX_MOTION_NUM][5] = { // time, x, y, z, VACUUM
////////////////////////////////////STEP1///////////////////////////////////////////
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.125,  0.090,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //up
                                                { 1.0,  0.000, -0.060,  0.180,  0.000},    //move
                                                { 1.0,  0.000, -0.060,  0.055,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0,  0.000, -0.060,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP2///////////////////////////////////////////
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.125,  0.085,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //up
                                                { 1.0,  0.000,  0.000,  0.180,  0.000},    //move
                                                { 1.0,  0.000,  0.000,  0.055,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0,  0.000,  0.000,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP3///////////////////////////////////////////
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.125,  0.080,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //up
                                                { 1.0,  0.000,  0.060,  0.180,  0.000},    //move
                                                { 1.0,  0.000,  0.060,  0.055,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0,  0.000,  0.060,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP4///////////////////////////////////////////
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.125,  0.075,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //up
                                                { 1.0,  0.000, -0.026,  0.180,  0.000},    //move
                                                { 1.0,  0.000, -0.026,  0.105,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0,  0.000, -0.026,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP5///////////////////////////////////////////
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.125,  0.070,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //up
                                                { 1.0,  0.000,  0.026,  0.180,  0.000},    //move
                                                { 1.0,  0.000,  0.026,  0.105,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0,  0.000,  0.026,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP6///////////////////////////////////////////
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.125,  0.065,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.165,  0.125,  0.180,  0.000},    //up
                                                { 1.0,  0.000,  0.000,  0.180,  0.000},    //move
                                                { 1.0,  0.000,  0.000,  0.155,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0,  0.000,  0.000,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP7///////////////////////////////////////////
                                                { 3.0, -0.075,  0.075,  0.180,  0.000},    
                                                { 0.5, -0.075,  0.075,  0.100,  0.000},    
                                                { 0.5, -0.075,  0.075,  0.180,  0.000},    
                                                { 0.5, -0.075,  0.075,  0.100,  0.000},    
                                                { 0.5, -0.075,  0.075,  0.180,  0.000},    
                                                { 3.0, -0.075,  0.075,  0.180,  0.000},     
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP6///////////////////////////////////////////
                                                { 1.0, -0.005,  0.000,  0.180,  0.000},    //move
                                                { 1.0, -0.005,  0.000,  0.145,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //pick
                                                { 1.0, -0.005,  0.000,  0.180,  0.000},    //up
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.127,  0.075,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //place
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP5///////////////////////////////////////////
                                                { 1.0, -0.005,  0.026,  0.180,  0.000},    //move
                                                { 1.0, -0.005,  0.026,  0.095,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //place
                                                { 1.0, -0.005,  0.026,  0.180,  0.000},    //up
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.127,  0.080,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //pick
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP4///////////////////////////////////////////
                                                { 1.0, -0.005, -0.026,  0.180,  0.000},    //move
                                                { 1.0,  0.000, -0.026,  0.095,  0.000},    //down
                                                { 1.0, -0.005,  0.000,  0.000,  1.000},    //place
                                                { 1.0, -0.005, -0.026,  0.180,  0.000},    //up
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.127,  0.085,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //pick
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP3///////////////////////////////////////////
                                                { 1.0, -0.005,  0.060,  0.180,  0.000},    //move
                                                { 1.0, -0.005,  0.060,  0.045,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //place
                                                { 1.0, -0.005,  0.060,  0.180,  0.000},    //up
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.127,  0.090,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //pick
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP2///////////////////////////////////////////
                                                { 1.0, -0.005,  0.000,  0.180,  0.000},    //move
                                                { 1.0, -0.005,  0.000,  0.045,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //place
                                                { 1.0, -0.005,  0.000,  0.180,  0.000},    //up
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.127,  0.095,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //pick
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////STEP1///////////////////////////////////////////
                                                { 1.0, -0.005, -0.060,  0.180,  0.000},    //move
                                                { 1.0, -0.005, -0.060,  0.045,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000,  1.000},    //place
                                                { 1.0, -0.005, -0.060,  0.180,  0.000},    //up
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //move
                                                { 1.0, -0.165,  0.127,  0.100,  0.000},    //down
                                                { 1.0,  0.000,  0.000,  0.000, -1.000},    //pick
                                                { 1.0, -0.165,  0.127,  0.180,  0.000},    //up
/////////////////////////////////////////////////////////////////////////////////////
                                                };
// ////////////////////////////////////////////

//////////////////motion cnt////////////////
uint8_t motion_cnt = 0;
uint8_t filled_motion_num = MAX_MOTION_NUM;
////////////////////////////////////////////

void setMotion(OPEN_MANIPULATOR_LINK* omlink)
{
  if (motion)
  {
    if (omlink->isMoving())///////////////////////////
    {
      return;
    }
    else
    {
////////////////////////MOTION SETTING//////////////////////////////        
      //repeat check
      if (motion_cnt >= filled_motion_num)
      {
        if (repeat)
        {
          motion_cnt = 0;
        }
        else
        {
          motion_cnt = 0;
          motion     = false;     
        }
      }
      
      static std::vector<double> target_angle;
      if (motion_storage[motion_cnt][4] == 1.0)
      {
        omlink->toolMove("vacuum", 1.0);   //VACUUM on
        omlink->jointTrajectoryMove(target_angle, motion_storage[motion_cnt][0]);         
      }
      else if (motion_storage[motion_cnt][4] == -1.0)
      {
        omlink->toolMove("vacuum", -1.0);     //VACUUM off
        omlink->jointTrajectoryMove(target_angle, motion_storage[motion_cnt][0]);   
      }
      else
      {
        target_angle.clear();
        for (int8_t i = 1; i < 4; i++)
        {
          target_angle.push_back(motion_storage[motion_cnt][i]);
        }
        omlink->jointTrajectoryMove(target_angle, motion_storage[motion_cnt][0]);   
      }
      motion_cnt++;
////////////////////////MOTION SETTING////////////////////////////// 
    }
  }
  else
  {
    motion_cnt = 0;
  }
}

void motionStart(OPEN_MANIPULATOR_LINK* omlink)
{
  if(IK_motion)
  {
    Pose target_pose;
    std::vector <double> target_motion_angle;

    for (uint8_t i = 0; i < MAX_MOTION_NUM; i++)
    {
      motion_storage[i][0] = initial_IKmotion_set[i][0];     //time set
      motion_storage[i][4] = initial_IKmotion_set[i][4];     //VACUUM set
        
      for(uint8_t j = 0; j < 3; j++)
        target_pose.position(j) = initial_IKmotion_set[i][j+1];

      omlink->inverseKinematics("vacuum", target_pose, &target_motion_angle);

      for(uint8_t j = 0; j < 3; j++)
      {
        motion_storage[i][j+1] = target_motion_angle.at(j);
      }
    }
    filled_motion_num = MAX_MOTION_NUM;  
    motion_cnt = 0;          
    motion = true;
  }
  else
  {
    for (uint8_t i = 0; i < MAX_MOTION_NUM; i++)
    {
        for (uint8_t j = 0; j < 5; j++)
        {
        motion_storage[i][j] = initial_motion_set[i][j];
        }
    }
    filled_motion_num = MAX_MOTION_NUM;  
    motion_cnt = 0;          
    motion = true;
  }
}

void motionStop()
{
  for (uint8_t i = 0; i < MAX_MOTION_NUM; i++)
  {
    for (uint8_t j = 0; j < 5; j++)
    {
      motion_storage[i][j] = 0.0;
    }
  }
  motion_cnt = 0;
  motion     = false;
  repeat     = false;
}

void AddMotionStorage()
{

}

#endif
