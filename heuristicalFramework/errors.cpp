#include <stdexcept>
using namespace std;

class NotImplemented : public logic_error
{
public:
    NotImplemented() : logic_error("Function not yet implemented"){};
};

class InvalidOperation : public logic_error
{
public:
    InvalidOperation() : logic_error("Invalid operation, check parameters or stat of object"){};
};