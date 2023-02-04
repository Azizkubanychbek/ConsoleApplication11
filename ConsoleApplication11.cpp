// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <fstream>

class Adress {
public:
    Adress(){}
    Adress(std::string city, std::string st, int num1, int num2) {
        this->city = city;
        this->st = st;
        this->num1 = num1;
        this->num2 = num2;

    }
    void get_output_address(std::ofstream& fout) {
        fout << city << ", " <<st << ", " << num1 <<", " << num2<<"\n";
        std::cout << city << ", " << st << ", " << num1 << ", " << num2 << "\n";
 
    }
private:
    std::string city;
    std::string st;
    int num1;
    int num2;


};
int main()
{
    int num = 0;
    std::ifstream fin("in.txt");

    std::ofstream fout("out.txt");
    
    fin >> num;
    std::string city;
  
    std::string st;
    
    int num1 = 1;
   
    int num2 = 1;
   
    Adress* arr = new Adress[num];
    
    for (int i = 0; i < num; i++) {
       
        std::string city;
        fin >> city;
        std::string st;
        fin >> st;
        int num1 = 1;
        fin >> num1;
        int num2 = 1;
        fin >> num2;
        Adress adress(city, st, num1, num2);
        arr[i] = adress;

    }
    for (int i = num - 1; i >= 0; i--) {
        arr[i].get_output_address(fout);
    }


     
    delete []arr;
    

   }

