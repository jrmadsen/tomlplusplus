//# This file is a part of toml++ and is subject to the the terms of the MIT license.
//# Copyright (c) Mark Gillard <mark.gillard@outlook.com.au>
//# See https://github.com/marzer/tomlplusplus/blob/master/LICENSE for the full license text.
// SPDX-License-Identifier: MIT
#ifndef TOMLPLUSPLUS_H
#define TOMLPLUSPLUS_H

#define INCLUDE_TOMLPLUSPLUS_H // old guard name used pre-v3

//# Note: these would be included transitively as with any normal C++ project but
//# they're listed explicitly here because this file is used as the source for generate_single_header.py.

#include "impl/preprocessor.h"

TOML_PUSH_WARNINGS;
TOML_DISABLE_SPAM_WARNINGS;
TOML_DISABLE_SWITCH_WARNINGS;
TOML_DISABLE_SUGGEST_ATTR_WARNINGS;
#if TOML_MSVC
#pragma warning(disable : 5031) // #pragma warning(pop): likely mismatch (false-positive)
#elif TOML_CLANG && !TOML_HEADER_ONLY && TOML_IMPLEMENTATION
#pragma clang diagnostic ignored "-Wheader-hygiene" // false-positive
#endif

#include "impl/std_new.h"
#include "impl/std_string.h"
#include "impl/std_optional.h"
#include "impl/forward_declarations.h"
#include "impl/print_to_stream.h"
#include "impl/source_region.h"
#include "impl/date_time.h"
#include "impl/node.h"
#include "impl/node_view.h"
#include "impl/value.h"
#include "impl/make_node.h"
#include "impl/array.h"
#include "impl/key.h"
#include "impl/table.h"
#include "impl/utf8.h"
#include "impl/parse_error.h"
#include "impl/parse_result.h"
#include "impl/parser.h"
#include "impl/formatter.h"
#include "impl/toml_formatter.h"
#include "impl/json_formatter.h"
#include "impl/yaml_formatter.h"

#if TOML_IMPLEMENTATION

#include "impl/std_string.inl"
#include "impl/print_to_stream.inl"
#include "impl/node.inl"
#include "impl/node_view.inl"
#include "impl/value.inl"
#include "impl/array.inl"
#include "impl/table.inl"
#include "impl/parser.inl"
#include "impl/formatter.inl"
#include "impl/toml_formatter.inl"
#include "impl/json_formatter.inl"
#include "impl/yaml_formatter.inl"

#endif // TOML_IMPLEMENTATION

TOML_POP_WARNINGS;

// macro hygiene
#if TOML_UNDEF_MACROS
#undef TOML_ABI_NAMESPACE_BOOL
#undef TOML_ABI_NAMESPACE_END
#undef TOML_ABI_NAMESPACE_START
#undef TOML_ABI_NAMESPACES
#undef TOML_ABSTRACT_BASE
#undef TOML_ALWAYS_INLINE
#undef TOML_ANON_NAMESPACE
#undef TOML_ANON_NAMESPACE_END
#undef TOML_ANON_NAMESPACE_START
#undef TOML_ARM
#undef TOML_ASSERT
#undef TOML_ASSUME
#undef TOML_ASYMMETRICAL_EQUALITY_OPS
#undef TOML_ATTR
#undef TOML_CLANG
#undef TOML_CLOSED_ENUM
#undef TOML_CLOSED_FLAGS_ENUM
#undef TOML_COMPILER_EXCEPTIONS
#undef TOML_CONCAT
#undef TOML_CONCAT_1
#undef TOML_CONST_GETTER
#undef TOML_CONST_INLINE_GETTER
#undef TOML_CONSTRAINED_TEMPLATE
#undef TOML_CPP
#undef TOML_DISABLE_ARITHMETIC_WARNINGS
#undef TOML_DISABLE_CODE_ANALYSIS_WARNINGS
#undef TOML_DISABLE_SPAM_WARNINGS
#undef TOML_DISABLE_SPAM_WARNINGS_CLANG_10
#undef TOML_DISABLE_SUGGEST_ATTR_WARNINGS
#undef TOML_DISABLE_SWITCH_WARNINGS
#undef TOML_DISABLE_WARNINGS
#undef TOML_EMPTY_BASES
#undef TOML_ENABLE_IF
#undef TOML_ENABLE_WARNINGS
#undef TOML_EVAL_BOOL_0
#undef TOML_EVAL_BOOL_1
#undef TOML_EXTERN
#undef TOML_EXTERN_NOEXCEPT
#undef TOML_EXTERNAL_LINKAGE
#undef TOML_FLAGS_ENUM
#undef TOML_FLOAT_CHARCONV
#undef TOML_FLOAT128
#undef TOML_FLOAT16
#undef TOML_FP16
#undef TOML_GCC
#undef TOML_HAS_ATTR
#undef TOML_HAS_CHAR8
#undef TOML_HAS_CUSTOM_OPTIONAL_TYPE
#undef TOML_HAS_INCLUDE
#undef TOML_HAS_SSE2
#undef TOML_HAS_SSE4_1
#undef TOML_HIDDEN_CONSTRAINT
#undef TOML_ICC
#undef TOML_ICC_CL
#undef TOML_IMPL_NAMESPACE_END
#undef TOML_IMPL_NAMESPACE_START
#undef TOML_IMPLEMENTATION
#undef TOML_INCLUDE_WINDOWS_H
#undef TOML_INT_CHARCONV
#undef TOML_INT128
#undef TOML_INTELLISENSE
#undef TOML_INTERNAL_LINKAGE
#undef TOML_LANG_AT_LEAST
#undef TOML_LANG_EFFECTIVE_VERSION
#undef TOML_LANG_HIGHER_THAN
#undef TOML_LANG_UNRELEASED
#undef TOML_LAUNDER
#undef TOML_LIFETIME_HOOKS
#undef TOML_LIKELY
#undef TOML_MAKE_FLAGS
#undef TOML_MAKE_FLAGS_
#undef TOML_MAKE_VERSION
#undef TOML_MSVC
#undef TOML_NAMESPACE
#undef TOML_NAMESPACE_END
#undef TOML_NAMESPACE_START
#undef TOML_NEVER_INLINE
#undef TOML_NODISCARD
#undef TOML_NODISCARD_CTOR
#undef TOML_OPEN_ENUM
#undef TOML_OPEN_FLAGS_ENUM
#undef TOML_PARSER_TYPENAME
#undef TOML_POP_WARNINGS
#undef TOML_PURE_GETTER
#undef TOML_PURE_INLINE_GETTER
#undef TOML_PUSH_WARNINGS
#undef TOML_REQUIRES
#undef TOML_SA_LIST_BEG
#undef TOML_SA_LIST_END
#undef TOML_SA_LIST_NEW
#undef TOML_SA_LIST_NXT
#undef TOML_SA_LIST_SEP
#undef TOML_SA_NATIVE_VALUE_TYPE_LIST
#undef TOML_SA_NEWLINE
#undef TOML_SA_NODE_TYPE_LIST
#undef TOML_SA_UNWRAPPED_NODE_TYPE_LIST
#undef TOML_SA_VALUE_EXACT_FUNC_MESSAGE
#undef TOML_SA_VALUE_FUNC_MESSAGE
#undef TOML_SA_VALUE_MESSAGE_CONST_CHAR8
#undef TOML_SA_VALUE_MESSAGE_U8STRING_VIEW
#undef TOML_SA_VALUE_MESSAGE_WSTRING
#undef TOML_SIMPLE_STATIC_ASSERT_MESSAGES
#undef TOML_TRIVIAL_ABI
#undef TOML_UINT128
#undef TOML_UNLIKELY
#undef TOML_UNREACHABLE
#endif

#endif // TOMLPLUSPLUS_H
