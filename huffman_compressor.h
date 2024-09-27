#include <string>
#include <fstream>

const int TREE_NODES_NUMBER = 128;

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

class Huffman_compressor {
private:
    Node* node_array[TREE_NODES_NUMBER];
    std::ifstream in_file;
    std::ofstream out_file;
    
    void create_node_array();



};