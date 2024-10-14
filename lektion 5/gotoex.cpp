# include<iostream>

int main (){
     std::cout << "statement 1" << std:: endl;
     goto skip;
     std::cout << "statement 2" << std:: endl; // this one is skiped
     skip:
     return 0;
}