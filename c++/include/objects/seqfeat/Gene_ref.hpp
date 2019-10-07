#ifndef OBJECTS_SEQFEAT_GENE_REF_HPP
#define OBJECTS_SEQFEAT_GENE_REF_HPP

/* $Id: Gene_ref.hpp 103491 2007-05-04 17:18:18Z kazimird $
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
 * Author:  .......
 *
 * File Description:
 *   .......
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using specifications from the ASN data definition file
 *   'seqfeat.asn'.
 *
 * ---------------------------------------------------------------------------
 */

// generated includes
#include <objects/seqfeat/Gene_ref_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

class NCBI_SEQFEAT_EXPORT CGene_ref : public CGene_ref_Base
{
    typedef CGene_ref_Base Tparent;
public:
    // constructor
    CGene_ref(void);
    // destructor
    ~CGene_ref(void);
    
    // Appends a label to "label" based on content
    void GetLabel(string* label) const;

    // Checks for an emtpy Gene-ref used for suppressing /gene by overlap
    bool IsSuppressed(void) const;

private:
    // Prohibit copy constructor and assignment operator
    CGene_ref(const CGene_ref& value);
    CGene_ref& operator=(const CGene_ref& value);

};



/////////////////// CGene_ref inline methods

// constructor
inline
CGene_ref::CGene_ref(void)
{
}


/////////////////// end of CGene_ref inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // OBJECTS_SEQFEAT_GENE_REF_HPP
/* Original file checksum: lines: 90, chars: 2388, CRC32: 1c3e2db0 */