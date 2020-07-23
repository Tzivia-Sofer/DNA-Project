#ifndef __DNA__
#define __DNA__

#include <exception>
#include <cstring>
#include <vector>
#include <iostream>
#include <fstream>
#include "exceptions.h"

class Dna{
private:
    class Nucleotide{                            //inner class to avoid assigning invalid char from operator []
    public:
        Nucleotide(){};
        Nucleotide(const char &);
        Nucleotide & operator = (const char);
        char &getNucleotide() {return m_nucleotide;};
        friend std::ostream& operator << (std::ostream &os,const Nucleotide&);
        operator char(){return m_nucleotide;};

    private:
        char m_nucleotide;

    };

    Nucleotide *m_sequence;

public:
    Dna(char*);
    Dna(const std::string);
    Dna(const Dna &);
    ~Dna();

    Dna &                   operator = (const Dna &);
    Dna &                   operator = (const std::string);
    Dna &                   operator = (const char *);
    bool                    operator == (const Dna &);
    bool                    operator != (const Dna &);
    friend std::ostream&    operator << (std::ostream &os,const Dna&);

    size_t                  getLength()const;
    Dna                     slice(size_t, size_t);
    Dna                     pair();
    size_t                  count(char*);
    size_t                  find(const char*);
    std::vector<char*>      findConsensusSequences();
    std::vector <size_t>    findAll(char* c_to_find);

    Dna                     readFromFile(const char*);
    void                    writeToFile(const char*);

    Nucleotide&             operator[] (size_t);
    const Nucleotide&       operator[] (size_t) const;
    char*                   convert(Nucleotide* n)const;
    char*                   getSequence() const { return convert(m_sequence); }

};



#endif //__DNA__
