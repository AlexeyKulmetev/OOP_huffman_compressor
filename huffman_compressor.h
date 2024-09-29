#include <string>
#include <fstream>
#include <unordered_map>

const int TREE_NODES_NUMBER = 128;

class Node
{
public:
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
    std::unordered_map<char, int> frequency_map;
    std::ifstream in_file;
    std::ofstream out_file;
    std::string text; //  FIX ME this variable is used to read text into it
    

    void frequency_count(std::unordered_map<char, int> freq_map, std::string text)
    {
        for (char ch : text)
        {
            freq_map[ch]++; // assumed that map value is equal 0 and keys initialized by alphabet characters
        }
    }
    void create_node_array();

public:
    void build_tree(std::unordered_map<char, int> freq_map);

};