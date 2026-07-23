//create  a class car with data members like brand modeland price.write members functions to input and display car details .use public and private specifiers
 #include<iostream>
 using namespace std;
 class Car{
    public:
    string brand;
    string model_name;
    int  price;
  void takedetails(){
    cout<<"enter the brand name:"<<endl;
    cin>>brand;
    cout<<"enter the model name:"<<endl;
    cin>>model_name;
    cout<<"enter the price of car:"<<endl;
    cin>>price;

  }
  void display(){
    cout<<"the brand name of car is:"<<brand<<endl;
    cout<<"The model name is:"<<model_name<<endl;
    cout<<"The price of car is:"<<price<<endl;
  }
 };
 int main(){
    Car c;
    c.takedetails();
    c.display();
    return 0;
 }