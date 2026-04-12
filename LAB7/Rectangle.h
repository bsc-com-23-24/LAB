#pragma once

class Rectangle{
    private:
        float length;
        float width;

    Rectangle();
    public:
        void setwidth();
        void setlength();

        float getwidth();
        float getlength();

        float getarea();
};