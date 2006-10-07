#ifndef BTPD_TLIB_H
#define BTPD_TLIB_H

struct tlib {
    unsigned num;
    uint8_t hash[20];
    struct torrent *tp;

    char *name;
    char *dir;

    unsigned long long tot_up, tot_down;
    off_t content_size, content_have;

    HTBL_ENTRY(nchain);
    HTBL_ENTRY(hchain);
};

void tlib_init(void);
void tlib_put_all(struct tlib **v);

struct tlib *tlib_add(const uint8_t *hash, const char *mi, size_t mi_size,
    const char *content, char *name);
int tlib_del(struct tlib *tl);

void tlib_update_info(struct tlib *tl);

struct tlib *tlib_by_hash(const uint8_t *hash);
struct tlib *tlib_by_num(unsigned num);
unsigned tlib_count(void);

#endif
