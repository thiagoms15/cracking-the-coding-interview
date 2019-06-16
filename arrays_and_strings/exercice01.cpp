#include <iostream>
#include <cstring>

bool isUniqueChars(std::string);

int main(){

    if(isUniqueChars("Hello")){
        std::cout<<"The string has all unique characters."<<std::endl;
    }
    else{
        std::cout<<"The string has not all unique characters."<<std::endl;
    }

    if(isUniqueChars("World")){
        std::cout<<"The string has all unique characters."<<std::endl;
    }
    else{
        std::cout<<"The string has not all unique characters."<<std::endl;
    }
    return 0;
}

bool isUniqueChars(std::string str){
    int sizeStr = str.length();
    if(sizeStr>256){
        return false;
    }

    bool char_set[256];
    memset(char_set, 0, 256);

    for (int i = 0; i < sizeStr; i++){
        int val = str[i];
        if(char_set[val]){
            return false;
        }
        char_set[val]= true;
    }
    
    return true;
}
