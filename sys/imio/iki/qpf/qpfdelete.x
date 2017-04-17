# Copyright(c) 1986 Association of Universities for Research in Astronomy Inc.

include	<error.h>

# QPF_DELETE -- Delete a datafile.

procedure qpf_delete (kernel, root, extn, status)

int	kernel			#I IKI kernel
char	root[ARB]		#I root filename
char	extn[ARB]		#I extension
int	status			#O output status

pointer	sp, fname
errchk	qp_delete

begin
	call smark (sp)
	call salloc (fname, SZ_PATHNAME, TY_CHAR)

	call iki_mkfname (root, extn, Memc[fname], SZ_PATHNAME)
	iferr (call qp_delete (Memc[fname])) {
	    call erract (EA_WARN)
	    status = ERR
	} else
	    status = OK

	call sfree (sp)
end
