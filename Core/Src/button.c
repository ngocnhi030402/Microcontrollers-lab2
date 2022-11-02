
#include "button.h"



int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg12 = NORMAL_STATE;
int KeyReg13 = NORMAL_STATE;

static int TimeOutForKeyPress =  500;
int TimeOutForKeyPress2 =  500;
int button1_flag = 0;
int button2_flag = 0;

//int isButton1Pressed(){
//	if(button1_flag == 1){
//		button1_flag = 0;
//		return 1;
//	}
//	return 0;
//}

void subKeyProcess(){
	//TODO
	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	button1_flag = 1;
}

void getKeyInput(){
	static int KeyReg0 = NORMAL_STATE;
	static int KeyReg1 = NORMAL_STATE;
	static int KeyReg2 = NORMAL_STATE;
	static int KeyReg3 = NORMAL_STATE;

  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        button1_flag = 1;
      }
    }
    else{
       TimeOutForKeyPress--;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}
void getKeyInput2(){
	static int KeyReg0 = NORMAL_STATE;
	static int KeyReg1 = NORMAL_STATE;
	static int KeyReg2 = NORMAL_STATE;
	static int KeyReg3 = NORMAL_STATE;

  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        button2_flag = 1;
      }
    }
    else{
       TimeOutForKeyPress--;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}
//void getKeyInput2(){
//  KeyReg12 = KeyReg11;
//  KeyReg11 = KeyReg10;
//  KeyReg10 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
//  if ((KeyReg11 == KeyReg10) && (KeyReg11 == KeyReg12)){
//    if (KeyReg12 != KeyReg13){
//      KeyReg13 = KeyReg12;
//
//      if (KeyReg13 == PRESSED_STATE){
//        TimeOutForKeyPress2 = 500;
//        button2_flag = 1;
//      }
//    }
//    else{
//       TimeOutForKeyPress2--;
//        if (TimeOutForKeyPress2 == 0){
//          KeyReg13 = NORMAL_STATE;
//        }
//    }
//  }
//}
//void getKeyInput2(){
//
//  KeyReg12 = KeyReg11;
//  KeyReg11 = KeyReg10;
//  KeyReg10 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
//  if ((KeyReg11 == KeyReg10) && (KeyReg11 == KeyReg12)){
//    if (KeyReg12 != KeyReg13){
//      KeyReg13 = KeyReg12;
//
//      if (KeyReg13 == PRESSED_STATE){
//        TimeOutForKeyPress2 = 500;
//        button2_flag = 1;
//      }
//    }else{
//       TimeOutForKeyPress2 --;
//        if (TimeOutForKeyPress2 == 0){
//          KeyReg13 = NORMAL_STATE;
//        }
//    }
//  }
//}
