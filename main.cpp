//Student Name: Ashley Ramos

//Teacher: Dr. Tyson McMillan

//Date: 11/7/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <string>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One(GrandPrairie) = 1, City_Two(Ballwin) = 2  Replace City_One and City_Two with the names of your cities
//Data Table 
//City X, Day X: Temp 

City 1(GrandPraire), Day 1(Sunday): TEMP(79)
City 1(GrandPrairie), Day 2(Monday): TEMP(78)
City 1(GrandPrairie), Day 3(Tuesday): TEMP(74)
City 1(GrandPrairie), Day 4(Wednesday): TEMP(71)
City 1(GrandPrairie), Day 5(Thursday): TEMP(78)
City 1(GrandPrairie), Day 6(Friday): TEMP(68)
City 1(GrandPrairie), Day 7(Saturday): TEMP(60)
City 2(Ballwin), Day 1(Sunday): TEMP(75)
City 2(Ballwin), Day 2(Monday): TEMP(75)
City 2(Ballwin), Day 3(Tuesday): TEMP(71)
City 2(Ballwin), Day 4(Wednesday): TEMP(54)
City 2(Ballwin), Day 5(Thursday): TEMP(61)
City 2(Ballwin), Day 6(Friday): TEMP(58)
City 2(Ballwin), Day 7(Saturday): TEMP(57)
*/
 
int main()
{
      const int GrandPrairieTX = 1;
      const int BallwinMO = 1;
      const int WEEK = 7;
      string days[WEEK] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
 
    int temperature[GrandPrairieTX][WEEK];
    //Note your input data from the above
    cout << "Enter all temperatures for the week for Grand Prairie, TX and the temperatures for the week for Ballwin, MO.\n";
 
    // Inserting the values into the temperature array
    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    for (int i = 0; i < GrandPrairieTX; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "GrandPrairieTX" << ", " << days[j] << ": ";
            cin >> temperature[i][j];
        }
    }

    int temperatures[BallwinMO][WEEK];

    for (int i = 0; i < BallwinMO; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "BallwinMO" << ", " << days[j] << ": ";
            cin >> temperatures[i][j];
        }
    }    
 
    cout << "\n\nHere are the temperatures for the week of the two cities displayed:\n";
 
    // Accessing the values from the temperature array
    for (int i = 0; i < GrandPrairieTX; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "GrandPrairieTX" << ", " << days[j] << "= " << temperature[i][j] << " degrees" << endl;
        }
    }

    for (int i = 0; i < BallwinMO; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "BallwinMO" << ", " << days[j] << "= " << temperatures[i][j] <<" degrees" << endl;
        }
    }

   /*For up to 5 Points Extra Credit
      Expand this program: 
      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, 
	assume that value 0 represents day 1, 1 represents day 2....
      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , 
	assume that value 0 represents day 1, 1 represents day 2....
      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], 
	where i is index of the City Number, and j is the index of the temp for the day. 
      4. print the results of temperature[i][j]; to the screen. 
    */
 
    return 0;
}