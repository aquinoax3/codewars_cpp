// You are given a class named Person with a method named location, which should return the 3D location of the given person.

// Can you find the bug?


class Person {
    public:
        Person(int x, int y, int z)
            : m_x(x), m_y(y), m_z(z)
        {
        }
        
        void location(int& x, int& y, int& z)
        {
            x = m_x;
            y = m_y;
            z = m_z;
        }
        
    private:
        int m_x;
        int m_y;
        int m_z;
};



