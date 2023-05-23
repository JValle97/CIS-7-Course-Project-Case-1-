#include "Travel.h"
#include <iostream>
#include <iomanip>
using namespace std;



void Travel::mainMenu(Travel t)
{
    switch(toupper(selection))
    {
        case 'A': t.lowestcost(); break;
        case 'B': t.shortestpath(); break;
        case 'C': t.adjacency(); break;
        case 'D': t.matrix(); break;
    }
}
/******************************************************************************/
/******************************************************************************/
void Travel::shortestpath()
{
    matrix();
    int temp1, temp2, temp3, temp4, temp5, temp6, one, two, total;
    
    cout << endl << "Shortest path function working" << endl;
    
    cout << "start1 " << start<< " end " << end << " stop " << stop << endl;
    temp1 = temp[start - 1].distance[end-1];
    temp2 = temp[start - 1].distance[stop-1];
    temp5 = temp[end - 1].distance[stop - 1];
    temp6 = temp[stop - 1].distance[end - 1];
    if (temp1 < temp2)
    {
        temp3 = end - 1;
        temp4 = stop - 1;
        one = temp1;
        two = temp5;
    }
    else if (temp1 > temp2)
    {
        temp3 = stop - 1;
        temp4 = end - 1;
        one = temp2;
        two = temp6;
    }
    total = one + two;
    
    cout << "Shortest Path:\n" << setw(13) << temp[start - 1].city
         << " =>(" << one << ") " << temp[temp3].city << " =>(" 
         << two << ") " << temp[temp4].city << " (= " << total << " Mi)" << endl;
    
}
/******************************************************************************/
/******************************************************************************/
void Travel::adjacency()
{
    matrix();
    cout << endl << "adjacenccy function working" << endl;
    
    cout << temp[start - 1].city << endl;
    for (int index = 0; index < 4; index++)
    {
        if (index == 0 || index == 2)
        {
            cout << setw(8) << "=> " << temp[index].city 
                 << "\t" << temp[start - 1].distance[index] << " Mi"<< endl;
        }
        else
            cout << setw(8) << "=> " << temp[index].city 
                 << "\t\t" << temp[start - 1].distance[index] << " Mi"<< endl;
    }
    
    cout << endl;
}
/******************************************************************************/
/******************************************************************************/
void Travel::matrix()
{
    cout << endl << "matrix function working" << endl;
    
        temp[0].city = "Riverside";
        temp[0].end = 1;
        
        temp[1].city = "Perris";
        temp[1].end = 2;
        
        temp[2].city = "Moreno Valley";
        temp[2].end = 3;
        
        temp[3].city = "Hemet";
        temp[3].end = 4;
    

        temp[0].distance[0] = 0;
        temp[0].distance[1] = 24;
        temp[0].distance[2] = 16;
        temp[0].distance[3] = 33;
    
        temp[1].distance[0] = 24;
        temp[1].distance[1] = 0;
        temp[1].distance[2] = 18;
        temp[1].distance[3] = 30;
    
        temp[2].distance[0] = 16;
        temp[2].distance[1] = 18;
        temp[2].distance[2] = 0;
        temp[2].distance[3] = 26;
    
        temp[3].distance[0] = 33;
        temp[3].distance[1] = 30;
        temp[3].distance[2] = 26;
        temp[3].distance[3] = 0;
    
    if (selection == 'D')
    {
        for (int i = 0; i < 4; i++)
            cout<<"("<<start<<", "<<temp[i].end<<", "<<temp[start - 1].distance[i]<<")\n";
    }
}
/******************************************************************************/
/******************************************************************************/
void Travel::lowestcost()
{
    cout << endl << "Lowest cost function working" << endl;
}
/******************************************************************************/
/******************************************************************************/
void Travel::setSelection(char s)
{
    selection = s;
}
/******************************************************************************/
/******************************************************************************/
void Travel::setStart(int st)
{
    start = st;
}
/******************************************************************************/
/******************************************************************************/
void Travel::setStop(int sp)
{
    stop = sp;
}
/******************************************************************************/
/******************************************************************************/
void Travel::setEnd(int e)
{
    end = e;
}
/******************************************************************************/
/******************************************************************************/
char Travel::getSelection()
{
    return selection;
}
/******************************************************************************/
/******************************************************************************/
int Travel::getStart()
{
    return start;
}
/******************************************************************************/
/******************************************************************************/
int Travel::getEnd()
{
    return end;
}
/******************************************************************************/
/******************************************************************************/
int Travel::getStop()
{
    return stop;
}