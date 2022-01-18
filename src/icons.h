#ifndef ICONS_H_
#define ICONS_H_

struct icon {
    const char *ext;
    const char *symbol;
};

const struct icon *get_icon(const char *, size_t);

#endif
