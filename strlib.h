int string_length(const char *s);

char *string_at(int index, const char *input, char *dest);

char string_char_at(int index, const char *s);

char *string_concat(const char *input, char *dest);

int string_ends_with(const char *input, const char *end);

int string_includes(const char *input, const char *substring);

int string_index_of(const char *input, const char *substring);

int string_last_index_of(const char *input, const char *substring);

int string_locale_compare(const char *input, const char *substring);

char *string_pad_end(const char *input, int len, char pad, char *dest);

char *string_pad_start(const char *input, int len, char pad, char *dest);

char *string_repeat(const char *input, int count, char *dest);

char *string_slice(const char *input, int start, int end, char *dest);

int string_starts_with(const char *input, const char *start);

char *string_substring(const char *input, int start, int end, char *dest);

char *string_to_lowercase(const char *input, char *dest);

char *string_to_uppercase(const char *input, char *dest);

char *string_trim(const char *input, char *dest);

int string_value_of(const char *input);