/*
 * button.h
 *
 *  Created on: Oct 26, 2022
 *      Author: admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;
extern int button2_flag;

void getKeyInput();
void getKeyInput2();

#endif /* INC_BUTTON_H_ */

