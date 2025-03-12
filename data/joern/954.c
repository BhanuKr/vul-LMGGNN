static char *doubles2str(double *dp, int count, const char *sep)

{

    int i;

    char *ap, *ap0;

    int component_len = 15 + strlen(sep);

    if (!sep) sep = ", ";

    ap = av_malloc(component_len * count);

    if (!ap)

        return NULL;

    ap0   = ap;

    ap[0] = '\0';

    for (i = 0; i < count; i++) {

        unsigned l = snprintf(ap, component_len, "%f%s", dp[i], sep);

        if(l >= component_len)

            return NULL;

        ap += l;

    }

    ap0[strlen(ap0) - strlen(sep)] = '\0';

    return ap0;

}
