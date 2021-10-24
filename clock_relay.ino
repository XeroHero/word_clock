
/*
 * Arduino code to control 16 channel relay with Arduino UNO
 * Control more than 1 relay
 * Written by Ahmad Shamshiri for Robojax.com on Sunday Oct 08, 2018 
 * at 10:35 in Ajax, Ontario, Canada
 * Watch video instruction for this code: https://youtu.be/Q9aBI4ELKC4
 * 
 * This code is "AS IS" without warranty or liability. Free to be used as long as you keep this note intact.* 
 * This code has been download from Robojax.com
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    This code has been modified by Lorenzo Battilocchi (@XeroHero) for the purpose of the "Word Clock" project.
 */



const int controlPin[16] = {20,21, 22, 23,24,25,26,27,28,29,30,31, 32, 33, 34, 35}; // define pins

const int triggerType = LOW;// your relay type
int loopDelay = 1000;// delay in loop
int tmpStat =1;


void setup() {
  for(int i=0; i<16; i++)
  {
    pinMode(controlPin[i], OUTPUT);// set pin as output
    if(triggerType ==LOW){
      digitalWrite(controlPin[i], HIGH); // set initial state OFF for low trigger relay
    }else{
       digitalWrite(controlPin[i], LOW); // set initial state OFF for high trigger relay     
    }
    Serial.print("Changed relay: " + controlPin[i]+1);
  }
  
  Serial.begin(9600);// initialize serial monitor with 9600 baud
}

void loop() {
  initRelay(); 

 // digitalWrite(controlPin[5], LOW); // relay 6 ON
 // digitalWrite(controlPin[2], LOW); // relay 3 ON 
 // digitalWrite(controlPin[12], LOW); // relay 13 ON 
 
 //  digitalWrite(controlPin[5], HIGH); // relay 6 OFF
          
}

void initRelay(){
 digitalWrite(controlPin[0], HIGH); // relay 6 ON
 digitalWrite(controlPin[1], HIGH); // relay 3 ON 
 digitalWrite(controlPin[2], HIGH); // relay 13 ON 
 digitalWrite(controlPin[3], HIGH); // relay 6 ON
 digitalWrite(controlPin[4], HIGH); // relay 3 ON 
 digitalWrite(controlPin[5], HIGH); // relay 13 ON 
 digitalWrite(controlPin[6], HIGH); // relay 6 ON
 digitalWrite(controlPin[7], HIGH); // relay 3 ON 
 digitalWrite(controlPin[8], HIGH); // relay 13 ON 
 digitalWrite(controlPin[9], HIGH); // relay 6 ON
 digitalWrite(controlPin[10], HIGH); // relay 3 ON 
 digitalWrite(controlPin[11], HIGH); // relay 13 ON 
 digitalWrite(controlPin[12], HIGH); // relay 6 ON
 digitalWrite(controlPin[13], HIGH); // relay 3 ON 
 digitalWrite(controlPin[14], HIGH); // relay 13 ON 
 digitalWrite(controlPin[15], HIGH); // relay 13 ON 
 }
