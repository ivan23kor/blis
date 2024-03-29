/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name(s) of the copyright holder(s) nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

dim_t bli_l3_determine_kc
      (
              dir_t   direct,
              dim_t   i,
              dim_t   dim,
        const obj_t*  a,
        const obj_t*  b,
              bszid_t bszid,
        const cntx_t* cntx,
        const cntl_t* cntl
      );


#undef  GENPROT
#define GENPROT( opname ) \
\
dim_t PASTEMAC0(opname) \
      ( \
               dir_t   direct, \
               dim_t   i, \
               dim_t   dim, \
         const obj_t*  a, \
         const obj_t*  b, \
               bszid_t bszid, \
         const cntx_t* cntx  \
      );

GENPROT( gemm_determine_kc )
GENPROT( gemmt_determine_kc )
GENPROT( trmm_determine_kc )
GENPROT( trsm_determine_kc )


#undef  GENPROT
#define GENPROT( opname ) \
\
dim_t PASTEMAC0(opname) \
      ( \
               dim_t   i, \
               dim_t   dim, \
         const obj_t*  a, \
         const obj_t*  b, \
               bszid_t bszid, \
         const cntx_t* cntx  \
      );

GENPROT( gemm_determine_kc_f )
GENPROT( gemm_determine_kc_b )

GENPROT( gemmt_determine_kc_f )
GENPROT( gemmt_determine_kc_b )

GENPROT( trmm_determine_kc_f )
GENPROT( trmm_determine_kc_b )

GENPROT( trsm_determine_kc_f )
GENPROT( trsm_determine_kc_b )

