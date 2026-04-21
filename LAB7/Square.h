    #pragma once

    namespace shapes {

    class Square {
        private:
            float side;

        public:
            void setSide(float);
            float getSide() const;
            float getArea() const;

            Square();
            Square(float side);
    };

    }