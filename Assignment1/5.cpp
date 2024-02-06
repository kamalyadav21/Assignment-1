#include<iostream>
#include<string>
using namespace std;
bool leap_year(int y){
    if (y%100==0){
        if (y%400==0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if (y%4==0){
            return true;
        }
        else{
            return false;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    int yearct = 0;
    int month = 0;
    string monthl[12]={"January","February","March","April","May","june","July","August","September","October","November","December"};
    int monthda[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(n>365){
        if (leap_year(yearct)==true){
            n-=366;
            yearct++;
        }
        else{
            n-=365;
            yearct++;
        }
    }
    while (true){
        if (leap_year(yearct)==true){
            if (month==2){
                if (n>29){
                n-=29;
                month++;}
                else{
                    cout<<"Leap year\n";
                    cout<<"It is "<<n<<" "<<monthl[month]<<" "<<yearct;
                    break;
                }
            }

            else{
                if (n>monthda[month]){
                n-=monthda[month];
                month++;}
                else{
                    cout<<"Leap year\n";
                    cout<<"It is "<<n<<" "<<monthl[month]<<" "<<yearct;
                    break;
                }
            }
        }
        else if(n>monthda[month]){
            n-=monthda[month];
            month++;
        }
        else{
            cout<<"Not a leap year\n";
            cout<<"It is "<<n<<" "<<monthl[month]<<" "<<yearct;
            break;
        }
    }

}
