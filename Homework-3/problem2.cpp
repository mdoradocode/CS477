//This function takes in an array and returns the first index matching the largest element using a divide and conquer stratagey
//Michael Dorado
//CS 477
//2/27/2021
#include <iostream>
#include <cstring>
#include <cmath>
#include <array>

using namespace std;

int findLargest(int input[], int low, int high, int size);

int main()
{
    int input[] = {1,4,9,3,4,9,5,6,9,3,7}; //Hardcoded array but could be replaced with user input
    int high =  sizeof(input)/sizeof(int); //Find the size of the array
    int low = 0;
    int bigBoy = findLargest(input, low, high, high); //retrieve the largest value
    for(int i = 0; i < high; i++) //Traverse array and return the first index that matches the largest value "bigBoy"
    {
        if (input[i] == bigBoy)
        {
            cout << "The first index with the largest value is: " << i << endl;
            break;
        }
    }

}

//Recursively break down an array in twos till you have singular arrays and return the values in those smalll arrays
int findLargest(int input[], int low, int high, int size)
{
    //Base Case
    if(size <= 1)
    {
        return input[low];
    }
    //Inductive Step
    int mid = ceil(size/2); //Split the array in two, if odd, give the larger array to the left side of the tree always
    size = mid;
    int leftReturn = findLargest(input, low, mid, size);
    int rightReturn = findLargest(input, mid+1, high, size-1);
    //Compare results from recursive functions filtering the largest result
    if(leftReturn > rightReturn){return leftReturn;} 
    else{return rightReturn;}
}