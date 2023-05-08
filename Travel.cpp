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
    //start stop end
    
    cout << endl << "Shortest path function working" << endl;
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
                 << "\t" << temp[index].distance << " Mi"<< endl;
        }
        else
            cout << setw(8) << "=> " << temp[index].city 
                 << "\t\t" << temp[index].distance << " Mi"<< endl;
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
    
    if (start == 1)
    {
        temp[0].distance = 0;
        temp[1].distance = 24;
        temp[2].distance = 16;
        temp[3].distance = 33;
    }
    else if (start == 2)
    {
        temp[0].distance = 24;
        temp[1].distance = 0;
        temp[2].distance = 18;
        temp[3].distance = 30;
    }
    else if (start == 3)
    {
        temp[0].distance = 16;
        temp[1].distance = 18;
        temp[2].distance = 0;
        temp[3].distance = 26;
    }
    else if (start == 4)
    {
        temp[0].distance = 33;
        temp[1].distance = 30;
        temp[2].distance = 26;
        temp[3].distance = 0;
    }
    if (selection == 'D')
    {
        for (int i = 0; i < 4; i++)
            cout<<"("<<start<<", "<<temp[i].end<<", "<<temp[i].distance<<")\n";
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