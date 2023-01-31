#include <iostream>

using namespace std;
void print_days(){
   string  days[]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
   for(char i=0;i<7;i++){
      cout<<days[i]<<" ";
   }
   cout<<endl;
   cout<<"-----------------------------"<<endl;
}
int return_day_num(string day){
   switch (day)
   {
   case "mon":
      return 0;
      break;
   case "tue":
      return 1;
      break;
   case "wed":
      return 2;
      break;
   case "thu":
      return 3;
      break;
   case "fri":
      return 4;
      break;
   case "sat":
      return 5;
      break;
   case "sun":
      return 6;
      break;
   
   default:
      return -1;
      break;
   }
}

bool check_leap(int year){

}
int main(){
   cout<<"Welcome to Calendar app"<<endl;
   cout<<"Enter the year please>>";
   int year;
   cin>>year;
   cout<<"enter the first day of the year enter just 3 letters of each name with capital>>";
   string day;
   cin>>day;
   int day_num=return_day_num(day);
   if(day_num==-1){
      cout<<"Invalid day entry";
      return 1;
   }
   
}