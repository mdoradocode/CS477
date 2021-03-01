//This program places all negative elements of a list before the the positive ones using a quicksort algorithim
//For ease of use, in terminal type make, then ./problem3
//Michael Dorado
//CS 477
//2/27/2021
#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
    int input[] = {4,-3,9,8,7,-4,-2,-1,0,6,-5}; //Could be modified to user input
    int inSize = sizeof(input)/sizeof(int); //Compute the size of the array
    int follower = -1; //off set the follower 
    for(int mover = 0; mover <= inSize; mover ++) //for the entire size of the array
    {
        if (input[mover] < 0)
        {
            follower++;
            //Swap functionality
            int temp =  input[follower];
            input[follower] = input[mover];
            input[mover] = temp;
        }
    }
    //Print the array
    cout << '{';
    for(int i = 0; i < inSize; i++){cout << input[i] << ' ';}
    cout << '}';
}

