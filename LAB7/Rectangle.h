#pragma once

class Rectangle{


    private:
        float length;
        float width;

   
    public:
        void setWidth(float);
        void setLength(float);

        float getWidth() const;
        float getLength() const;

        float getArea() const;

         Rectangle();
         Rectangle(float length, float width);
};