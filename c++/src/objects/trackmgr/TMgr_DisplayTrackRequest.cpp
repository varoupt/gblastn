/* $Id: TMgr_DisplayTrackRequest.cpp 371634 2012-08-09 17:41:42Z clausen $
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
 *   using the following specifications:
 *   'trackmgr.asn'.
 */

// standard includes
#include <ncbi_pch.hpp>

// generated includes
#include <objects/trackmgr/TMgr_DisplayTrackRequest.hpp>
#include <objects/trackmgr/TMgr_GenomeContext.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

// destructor
CTMgr_DisplayTrackRequest::~CTMgr_DisplayTrackRequest(void)
{
}

void
CTMgr_DisplayTrackRequest::SetClientName(const string& name)
{
    SetClient().SetClient_name(name);
}

void
CTMgr_DisplayTrackRequest::SetResourceName(const string& name)
{
    SetClient().SetContext(name);
}

void
CTMgr_DisplayTrackRequest::AddAssemblyAcc(const string& acc)
{
    CRef<CTMgr_GenomeContext> ctx(new CTMgr_GenomeContext());
    CTMgr_AssemblySpec& spec = ctx->SetAssembly();
    spec.SetAccession(acc);
    SetGenome_contexts().push_back(ctx);
}

void
CTMgr_DisplayTrackRequest::AddAssemblyNameTax(const string& name, int tax_id)
{
    CRef<CTMgr_GenomeContext> ctx(new CTMgr_GenomeContext());
    CTMgr_AssemblySpec& spec = ctx->SetAssembly();
    spec.SetName().SetName(name);
    spec.SetName().SetTax_id(tax_id);
    SetGenome_contexts().push_back(ctx);
}

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

/* Original file checksum: lines: 57, chars: 1789, CRC32: 1b46a3a */
