#ifndef TRAVEL_H
#define TRAVEL_H
#include <string>

class Travel
{
    private:
        char selection;
        int start,
            stop,
            end,
            path;
        
        struct Route
        {
            std::string city[4];
            int distance;
            int end;
        };
    
    public:
        void mainMenu(Travel);
        void lowestcost();
        void shortestpath();
        void adjacency();
        void matrix();
    
        void setSelection(char);
        void setStart(int);
        void setEnd(int);
        void setStop(int);
        
        char getSelection();
        int getStart();
        int getEnd();
        int getStop();
};

#endif