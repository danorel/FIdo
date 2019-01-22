//
// Created by Dan Orel on 1/22/19.
//
#include "FIdo.h"

void Library::cypher_file(int move_index) {
    int data_size = static_cast<int>(data.size());
    char *c_data = new char[data_size];
    strcpy(c_data, data.c_str());
    for(int index = 0; index < data_size; index++){
        if(static_cast<int>(c_data[index]) >= ascii.get_MIN() && static_cast<int>(c_data[index]) <= ascii.get_MAX()){
            if(static_cast<int>(c_data[index]) >= (ascii.get_MAX() - move_index)){
                c_data[index] = static_cast<char>(static_cast<int>(c_data[index]) - (ascii.get_difference() - move_index));
            } else {
                c_data[index] = static_cast<char>(static_cast<int>(c_data[index]) + move_index);
            }
        }
    }
    data = "";
    for(int index = 0; index < data_size; index++){
        data[index] = c_data[index];
    }
    output_file.open(output_filename, std::ios::in);
    output_file << data;
}

void Library::decypher_file() {

}

void Library::write_to_input_file(std::string data){
    this->data = data;
    input_file.open(output_filename);
    if(input_file.is_open()){
        input_file.open(input_filename);
        input_file >> data;
        input_file.close();
    }
}

void Library::create_file(std::string filename, bool state){
    if(state){
        output_filename = filename;
        output_file.open(output_filename);
        output_file.close();
    } else {
        input_filename = filename;
        input_file.open(input_filename);
        input_file.close();
    }
}

std::string Library::get_output_filename() {
    return output_filename;
}

std::string Library::get_input_filename() {
    return input_filename;
}
