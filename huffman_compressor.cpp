#include "huffman_compressor.h"

void Huffman_compressor::create_node_array() 
{
    for (Node* node : node_array)
    {
        node = new Node;
    }
}