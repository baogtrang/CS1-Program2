//Bao Trang.
//Computer Science 1 - Professor Benjamin Shelton.
//This program will calculate the amount of time
//it will take users to watch all of their desired media.
#include <iostream>
using namespace std;

int main() 
{
  char answer;
  int movie, TV_show, anime, YouTube; //number of minutes it will take to watch each type of media
  int totalMinute; //in MINUTES
  int day; 
  int hour; //remaining hours in a day
  int minLeft; //remaining minutes in a day
   // time frame

  cout <<"How many movies do you want to watch? \n";
  cin >> movie;
  movie *= 90; //1.5 hour is 90 minutes

  cout <<"How many TV show do you want to watch? \n";
  cin >> TV_show;
  TV_show *= 50;

  cout <<"How many anime episodes do you want to watch? \n";
  cin >>anime;
  anime *= 20;

  cout << "How many YouTube videos do you want to watch? \n";
  cin >> YouTube;
  YouTube *= 5;

  totalMinute = movie + TV_show + anime + YouTube; //total amount of minutes to watch all
  
  day = totalMinute / 1440; //number of days
  hour = (totalMinute - (day * 1440)) / 60; //remaining hours
  minLeft = totalMinute - ((day * 1440) + (hour * 60)); //remainding minutes
  
  /*cout << totalMinute <<endl;
  cout << hour <<endl;
  cout << day <<endl;*/

  cout<<"The total time to watch all of them is " <<day <<" day(s) " << hour << " hour(s) " <<"and " <<minLeft <<" minutes. \n";

  cout <<"Do you want to watch them all in a month? (Y/N)";
  cin >> answer;
  if (answer == 'Y' && day <=30)
  {
    cout <<"You can watch them all in month.";
  }
  else if (answer =='N')
  {cout << "Up to you";}

  else if( answer =='Y' && day >30)
  {
    cout<<"You cannot watch them all in a month, but you can do more useful things for your own sake within that time frame.";
  }

  return 0;
}