int string_length(const char *s)
{
    const char *p = s;
    int len = 0;
    while(*p != '\0'){
        p++;
        len++;
    }
    return len;
}

char *string_at(int index, const char *input, char *dest)
{
    const char *stringPointer = input;
    int i = 0;
    while(*stringPointer != '\0' && i < index){
        stringPointer++;
        i++;
    }
    dest[0] = *stringPointer;
    dest[1] = '\0';
    return dest;
}

char string_char_at(int index, const char* s)
{
    const char *p = s;
    int i = 0;
    while(*p != '\0' && i < index){
        p++;
        i++;
    }
    return *p;
}

char *string_concat(const char *input, char *dest)
{
    int dest_len = string_length(dest);
    const char *stringPointer = input;
    int i = dest_len;
    while(*stringPointer != '\0'){
        dest[i] = *stringPointer;
        stringPointer++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int string_ends_with(const char *input, const char *end)
{
    int src_len = string_length(input);
    int end_len = string_length(end);
    if(src_len < end_len){
        return 0;
    }
    const char *stringPointer = input + src_len - end_len;
    const char *pend = end;
    while(*pend != '\0'){
        if(*stringPointer != *pend){
            return 0;
        }
        stringPointer++;
        pend++;
    }
    return 1;
}

int string_includes(const char *input, const char *substring)
{
    const char *stringPointer = input;
    const char *substringPointer = substring;
    while(*stringPointer != '\0'){
        if(*stringPointer == *substringPointer){
            const char *stringPointer2 = stringPointer;
            const char *subStringPointer2 = substringPointer;

            while(*stringPointer2 != '\0' && *subStringPointer2 != '\0' && *stringPointer2 == *subStringPointer2){
                stringPointer2++;
                subStringPointer2++;
            }

            if(*subStringPointer2 == '\0'){
                return 1;
            }
        }
        stringPointer++;
    }
    return 0;
}

int string_index_of(const char *input, const char *substring)
{
    const char *stringPointer = input;
    const char *substringPointer = substring;
    int index = 0;
    while(*stringPointer != '\0'){
        if(*stringPointer == *substringPointer){
            const char *stringPointer2 = stringPointer;
            const char *subStringPointer2 = substringPointer;
            while(*stringPointer2 != '\0' && *subStringPointer2 != '\0' && *stringPointer2 == *subStringPointer2){
                stringPointer2++;
                subStringPointer2++;
            }
            if(*subStringPointer2 == '\0'){
                return index;
            }
        }
        stringPointer++;
        index++;
    }
    return -1;
}

int string_last_index_of(const char *input, const char *substring)
{
    const char *stringPointer = input;
    const char *substringPointer = substring;
    int index = 0;
    int last_index = -1;
    while(*stringPointer != '\0'){
        if(*stringPointer == *substringPointer){
            const char *stringPointer2 = stringPointer;
            const char *subStringPointer2 = substringPointer;
            while(*stringPointer2 != '\0' && *subStringPointer2 != '\0' && *stringPointer2 == *subStringPointer2){
                stringPointer2++;
                subStringPointer2++;
            }
            if(*subStringPointer2 == '\0'){
                last_index = index;
            }
        }
        stringPointer++;
        index++;
    }
    return last_index;
}

int string_locale_compare(const char *s1, const char *s2)
{
    const char *ps1 = s1;
    const char *ps2 = s2;
    while(*ps1 != '\0' && *ps2 != '\0'){
        if(*ps1 < *ps2){
            return -1;
        }else if(*ps1 > *ps2){
            return 1;
        }
        ps1++;
        ps2++;
    }
    if(*ps1 == '\0' && *ps2 == '\0'){
        return 0;
    }else if(*ps1 == '\0'){
        return -1;
    }else{
        return 1;
    }
}

char *string_pad_end(const char *input, int len, char pad, char *dest)
{
    const char *stringPointer = input;
    int i = 0;
    while(*stringPointer != '\0'){
        dest[i] = *stringPointer;
        stringPointer++;
        i++;
    }
    while(i < len){
        dest[i] = pad;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *string_pad_start(const char *input, int len, char pad, char *dest)
{
    int src_len = string_length(input);
    int i = 0;
    while(i < len - src_len){
        dest[i] = pad;
        i++;
    }
    const char *stringPointer = input;
    while(*stringPointer != '\0'){
        dest[i] = *stringPointer;
        stringPointer++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *string_repeat(const char *input, int count, char *dest)
{
    const char *stringPointer = input;
    int i = 0;
    int j = 0;
    while(j < count){
        const char *stringPointer2 = stringPointer;
        while(*stringPointer2 != '\0'){
            dest[i] = *stringPointer2;
            stringPointer2++;
            i++;
        }
        j++;
    }
    dest[i] = '\0';
    return dest;
}

char *string_slice(const char *input, int start, int end, char *dest)
{
    const char *stringPointer = input + start;
    int i = 0;
    while(*stringPointer != '\0' && i < end - start){
        dest[i] = *stringPointer;
        stringPointer++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int string_starts_with(const char *input, const char *start)
{
    const char *stringPointer = input;
    const char *pstart = start;
    while(*pstart != '\0'){
        if(*stringPointer != *pstart){
            return 0;
        }
        stringPointer++;
        pstart++;
    }
    return 1;
}

char *string_substring(const char *input, int start, int end, char *dest)
{
    const char *stringPointer = input + start;
    int i = 0;
    while(*stringPointer != '\0' && i < end - start){
        dest[i] = *stringPointer;
        stringPointer++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *string_to_lowercase(const char *input, char *dest)
{
    const char *stringPointer = input;
    int i = 0;
    while(*stringPointer != '\0'){
        if(*stringPointer >= 'A' && *stringPointer <= 'Z'){
            dest[i] = *stringPointer + 32;
        }else{
            dest[i] = *stringPointer;
        }
        stringPointer++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *string_to_uppercase(const char *input, char *dest)
{
    const char *stringPointer = input;
    int i = 0;
    while(*stringPointer != '\0'){
        if(*stringPointer >= 'a' && *stringPointer <= 'z'){
            dest[i] = *stringPointer - 32;
        }else{
            dest[i] = *stringPointer;
        }
        stringPointer++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *string_trim(const char *input, char *dest)
{
    const char *stringPointer = input;
    int i = 0;
    int start = 0;
    int end = 0;

    while (*stringPointer != '\0' && (*stringPointer == ' ' || *stringPointer == '\t' || *stringPointer == '\n' || *stringPointer == '\r')) {
        stringPointer++;
        start++;
    }

    const char *endPointer = stringPointer;
    while (*endPointer != '\0') {
        endPointer++;
        end++;
    }
    end--;

    while (end >= start && (stringPointer[end] == ' ' || stringPointer[end] == '\t' || stringPointer[end] == '\n' || stringPointer[end] == '\r')) {
        end--;
    }

    for (int j = start; j <= end; j++) {
        dest[i] = stringPointer[j];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

int string_value_of(const char *input)
{
    const char *stringPointer = input;
    int value = 0;
    while(*stringPointer != '\0'){
        if(*stringPointer >= '0' && *stringPointer <= '9'){
            value = value * 10 + *stringPointer - '0';
        }else{
            return 0;
        }
        stringPointer++;
    }
    return value;
}