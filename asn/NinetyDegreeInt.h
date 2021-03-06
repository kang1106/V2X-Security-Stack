/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 */

#ifndef	_NinetyDegreeInt_H_
#define	_NinetyDegreeInt_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NinetyDegreeInt {
	NinetyDegreeInt_min	= -900000000,
	NinetyDegreeInt_max	= 900000000,
	NinetyDegreeInt_unKnown	= 900000001
} e_NinetyDegreeInt;

/* NinetyDegreeInt */
typedef long	 NinetyDegreeInt_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NinetyDegreeInt;
asn_struct_free_f NinetyDegreeInt_free;
asn_struct_print_f NinetyDegreeInt_print;
asn_constr_check_f NinetyDegreeInt_constraint;
ber_type_decoder_f NinetyDegreeInt_decode_ber;
der_type_encoder_f NinetyDegreeInt_encode_der;
xer_type_decoder_f NinetyDegreeInt_decode_xer;
xer_type_encoder_f NinetyDegreeInt_encode_xer;
per_type_decoder_f NinetyDegreeInt_decode_uper;
per_type_encoder_f NinetyDegreeInt_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NinetyDegreeInt_H_ */
#include <asn_internal.h>
