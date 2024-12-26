/*
Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.

Function Description

Complete the staircase function in the editor below.

staircase has the following parameter(s):

int n: an integer
*/

void staircase(int n) {
    for(int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
           cout<< " ";
        }
        for(int k=0; k<=i; k++){
          cout<< "#";
        }
        cout<< endl;
    }
}

output : if n = 4; 
         #
        ##
       ###
      ####