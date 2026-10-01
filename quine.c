#include <stddef.h>
#include <stdio.h>

static const char *l[] = {
    "#include <stddef.h>",
    "#include <stdio.h>",
    "",
    "static const char *l[] = {",
    "    ",
    "};",
    "",
    "int main() {",
    "    for (size_t i = 0; i < 4; i++) {",
    "        puts(l[i]);",
    "    }",
    "    for (size_t i = 0; i < 24; i++) {",
    "        fputs(l[4], stdout);",
    "        fputc(34, stdout);",
    "        fputs(l[i], stdout);",
    "        fputc(34, stdout);",
    "        fputc(44, stdout);",
    "        fputc(10, stdout);",
    "    }",
    "    for (size_t i = 5; i < 24; i++) {",
    "        puts(l[i]);",
    "    }",
    "    return 0;",
    "}",
};

int main() {
    for (size_t i = 0; i < 4; i++) {
        puts(l[i]);
    }
    for (size_t i = 0; i < 24; i++) {
        fputs(l[4], stdout);
        fputc(34, stdout);
        fputs(l[i], stdout);
        fputc(34, stdout);
        fputc(44, stdout);
        fputc(10, stdout);
    }
    for (size_t i = 5; i < 24; i++) {
        puts(l[i]);
    }
    return 0;
}
