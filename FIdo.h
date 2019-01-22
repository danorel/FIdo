//
// Created by Dan Orel on 1/22/19.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef FIDO_FIDO_H
#define FIDO_FIDO_H
class ASCII{
public:
    int get_MAX(){
        return MAX_symbol_value;
    }
    int get_MIN(){
        return MIN_symbol_value;
    }
    int get_difference(){
        return (MAX_symbol_value - MIN_symbol_value);
    }
private:
    const int MAX_symbol_value = 122;
    const int MIN_symbol_value = 97;
};

class Library{
public:
    void cypher_file(int);
    void decypher_file();
    void create_file(std::string, bool);
    void write_to_input_file(std::string);
    std::string get_output_filename();
    std::string get_input_filename();
private:
    std::string input_filename;
    std::string output_filename;
    std::fstream input_file;
    std::fstream output_file;
    std::string data;
    ASCII ascii;
};

//class Note{
//public:
//    void create_note();
//    void delete_note_line(int);
//    void
//
//private:
//
//};
#endif //FIDO_FIDO_H
