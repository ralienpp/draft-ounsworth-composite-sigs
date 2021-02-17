/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "MyShopPurchaseOrders"
 * 	found in "productExample1.asn"
 */

#include "CustomerInfo.h"

static int check_permitted_alphabet_2(const void *sptr) {
	/* The underlying type is VisibleString */
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv >= 32 && cv <= 126)) return -1;
	}
	return 0;
}

static const int permitted_alphabet_table_4[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/* .                */
 2, 3, 4, 5, 6, 7, 8, 9,10,11, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
};

static int check_permitted_alphabet_4(const void *sptr) {
	const int *table = permitted_alphabet_table_4;
	/* The underlying type is NumericString */
	const NumericString_t *st = (const NumericString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_companyName_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 3 && size <= 50)
		 && !check_permitted_alphabet_2(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_contactPhone_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const NumericString_t *st = (const NumericString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 7 && size <= 12)
		 && !check_permitted_alphabet_4(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_CustomerInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CustomerInfo, companyName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		memb_companyName_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"companyName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CustomerInfo, billingAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"billingAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CustomerInfo, contactPhone),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumericString,
		memb_contactPhone_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"contactPhone"
		},
};
static const ber_tlv_tag_t asn_DEF_CustomerInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CustomerInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* companyName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* billingAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* contactPhone */
};
static asn_SEQUENCE_specifics_t asn_SPC_CustomerInfo_specs_1 = {
	sizeof(struct CustomerInfo),
	offsetof(struct CustomerInfo, _asn_ctx),
	asn_MAP_CustomerInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CustomerInfo = {
	"CustomerInfo",
	"CustomerInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CustomerInfo_tags_1,
	sizeof(asn_DEF_CustomerInfo_tags_1)
		/sizeof(asn_DEF_CustomerInfo_tags_1[0]), /* 1 */
	asn_DEF_CustomerInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CustomerInfo_tags_1)
		/sizeof(asn_DEF_CustomerInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CustomerInfo_1,
	3,	/* Elements count */
	&asn_SPC_CustomerInfo_specs_1	/* Additional specs */
};
