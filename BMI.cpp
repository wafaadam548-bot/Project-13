# include <iostream>
int main(){
    int again=1;
    while (again)
    {
        std::cout<<"________________________________________";
        std::cout<<"Welcome to the BMI app \n";
        std::cout<<"Let us Calcolate your BMI";
        std::cout<<"Plase Enter Your Height: ";
        float height;
        std::cin>>height;
        std::cout<<"\n";
        std::cout<<"Plase Enter Your Wight: ";
        float wight;
        std::cin>>wight;
        std::cout<<"\n";
        float BMI;
        height=height/100;
        BMI = wight / (height * height);
        std::cout<<"Your BMI is "<<BMI<<"\n";
        if (BMI<=18.5){
            std::cout<<"UnderWight";
        }
        else if (BMI<=24.5)
        {
            std::cout<<"Healthy =)";  }
        else if (BMI<= 29.9)
        {
            std::cout<<"OverWight =)";  }
        else if (29.9<=BMI)
            {
            std::cout<<"Obesity =)";  }
        else{
            std::cout<<"Please make sure you follow the steps =)";
        }    
    
        std::cout<<"Do you want to start again =): (1 = Yes, 0 = No): ";
        std:: cin>>again;
        std::cout << "Thank you for using our Calculator app! Goodbye =)";

        }
            
        
    
        
    
    
        
    
    }
    
    