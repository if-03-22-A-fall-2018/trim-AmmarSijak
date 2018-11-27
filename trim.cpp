/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <string.h>
  void trim(char* str, char* trimmed)
  {
    for (int i = 0; i < strlen(str); i++) {
      if (str[i] == "") {
      str[i] = 0;
      }
    }
  }
