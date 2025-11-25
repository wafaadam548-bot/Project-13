# include <iostream>
int main(){
    std::cout<<"________________________________________________________+\n";
    std::cout<<"Welcome to our Calcolater app =)\n";
    int num1;
    std::cout<<"Enter the first number : ";
    std:: cin>>num1;
    std::cout<<"\n";
    int num2;
    std::cout<<"Enter the second number : ";
    std::cin>>num2;
    char mult[20] = "×";   
    char dev[20] = "÷";    
    char add[20] = "+";    
    char sub[20] = "-";    
    std::cout<<"Choose the mathematical symbol:\n";
    std::cout<<"1-"<<mult;
    std::cout<<"\n"<<"2-"<<dev;
    std::cout<<"\n"<<"3-"<<add<<"\n";
    std::cout<<"4-"<<sub<<"\n";
    int player;
    std::cin>>player;
    if (player==1){
      int rsult= num1*num2;
      std::cout<<"the result = "<<rsult;
    }
    else if (player==2)
    {
        int rsult=num1/num2;
        std::cout<<"the result = "<<rsult;
    }
    else if (player==3)
    {
        int rsult=num1+num2;
        std::cout<<"the result = "<<rsult;
    } else if (player==4)
    {
        int rsult=num1-num2;
        std::cout<<"the result = "<<rsult;
    }
    else{
        std::cout<<"Plase make sure you follow the steps and add the numbers for the symbol not the symbol itself=)";
    }
    


    



    

}

