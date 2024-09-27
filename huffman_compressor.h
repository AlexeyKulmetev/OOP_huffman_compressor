#include <string>


struct Node
{
    unsigned char character;
    float frequency;
    std::string code;
    Node* left;
    Node* right;

    Node(unsigned char ch = 0, int freq = 0) : character{ch}, frequency{freq},
        left{nullptr}, right{nullptr} {}
};

