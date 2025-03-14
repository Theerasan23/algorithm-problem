#include <iostream>
#include <string>

int main (){

    int i , j = 0;
    int nums[] = {3,3};
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 6;
    for( i = 1 ; i < length ; i++ ){

        for (j = 0; j < length; j++){

            if( (nums[i] + nums[j]) == target ){
                std::cout << "[" << i << "," << j << "]" << "target is : " << target << std::endl ;
                return 0;
            }
        }
    }
    return 0;
}