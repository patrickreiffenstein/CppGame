#include "iostream"

class vector {
private:
    //X and y coordinates for the vector
    int xCoord, yCoord;

public:
    //Constructor
    explicit vector(int X = 0, int Y = 0);

    //Get the x and y values of the vector
    [[nodiscard]] int x() const;
    [[nodiscard]] int y() const;

    //Operator overload
    vector& operator+=(const vector& vectorToAdd);

    //Vector printing to console
    void printVector() const;

    //Unit vectors
    static vector up();
    static vector down();
    static vector left();
    static vector right();
};
