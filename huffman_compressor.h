#include <string>
#include <fstream>
#include <unordered_map>
#include <iostream>

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
    std::string path_to_file;
    Node* node_array[TREE_NODES_NUMBER];
    std::unordered_map<char, int> frequency_map;
    //std::ifstream in_file;
    std::ofstream out_file;
    std::string text; //  FIX ME this variable is used to read text into it
    int unique_char_amount; // FIX ME is it necessery to add this variable?
    int total_char_amount = 0; // number of all characters in a file

    void create_char_frequency_map() {
        std::ifstream file(path_to_file);
        char ch;
        if (!file.is_open()) {
            std::cerr << "Failed to open the file" << std::endl;
        }
        while (file.get(ch)) {
            // perhaps it is necessary to add "uvique_char_amount" incrementation
            ++total_char_amount;
            ++frequency_map[ch];
        }
    }


    void create_node_array();


public:
    void build_tree(std::unordered_map<char, int> freq_map);

    void set_path_to_file(std::string& path) {
        path_to_file = path;
    }

};