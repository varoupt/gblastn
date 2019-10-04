/* $Id: Gene_commentary.hpp 103491 2007-05-04 17:18:18Z kazimird $
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */

/// @file Gene_commentary.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'entrezgene.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Gene_commentary_.hpp


#ifndef OBJECTS_ENTREZGENE_GENE_COMMENTARY_HPP
#define OBJECTS_ENTREZGENE_GENE_COMMENTARY_HPP


// generated includes
#include <objects/entrezgene/Gene_commentary_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_ENTREZGENE_EXPORT CGene_commentary : public CGene_commentary_Base
{
    typedef CGene_commentary_Base Tparent;
public:
    // constructor
    CGene_commentary(void);
    // destructor
    ~CGene_commentary(void);

private:
    // Prohibit copy constructor and assignment operator
    CGene_commentary(const CGene_commentary& value);
    CGene_commentary& operator=(const CGene_commentary& value);

};

/////////////////// CGene_commentary inline methods

// constructor
inline
CGene_commentary::CGene_commentary(void)
{
}


/////////////////// end of CGene_commentary inline methods

// some useful CGene_commentary predicate (classes)
    
class NCBI_ENTREZGENE_EXPORT
IsGene_commentaryType : public unary_function <CRef<CGene_commentary>, bool>{
    CGene_commentary::EType _type;
public:
    IsGene_commentaryType(const CGene_commentary::EType& type) : _type(type) {};
    bool operator () (const CRef<CGene_commentary> comment) const;
};
class NCBI_ENTREZGENE_EXPORT
IsGene_commentaryHeading : public unary_function <CRef<CGene_commentary>, bool>{
    string _heading;
public:
    IsGene_commentaryHeading(const string& heading) :  _heading (heading) {};
    bool operator() (const CRef<CGene_commentary> comment) const;
};

class NCBI_ENTREZGENE_EXPORT
IsGene_commentaryHeadingAndType : public unary_function <CRef<CGene_commentary>, bool>{
    string _heading;
    CGene_commentary::EType _type;
public:
    IsGene_commentaryHeadingAndType(const string& heading, const CGene_commentary::EType& type) : _heading(heading), _type(type) {};
    bool operator () (const CRef<CGene_commentary> comment) const;
};

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // OBJECTS_ENTREZGENE_GENE_COMMENTARY_HPP
/* Original file checksum: lines: 94, chars: 2715, CRC32: 55ab55f7 */
