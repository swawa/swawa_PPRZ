
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>sw/airborne/subsystems/gps/gps_skytraq.h at master from paparazzi/paparazzi - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    <link href="https://gs1.wac.edgecastcdn.net/80460E/assets/453b65459b4bef8c01a7e8bdf3ac966cf3604a5d/stylesheets/bundle_github.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script type="text/javascript">
      if (typeof console == "undefined" || typeof console.log == "undefined")
        console = { log: function() {} }
    </script>
    <script type="text/javascript" charset="utf-8">
      var GitHub = {
        assetHost: 'https://gs1.wac.edgecastcdn.net/80460E/assets'
      }
      var github_user = null
      
    </script>
    <script src="https://gs1.wac.edgecastcdn.net/80460E/assets/javascripts/jquery/jquery-1.6.1.min.js" type="text/javascript"></script>
    <script src="https://gs1.wac.edgecastcdn.net/80460E/assets/9a8d4d0be567a85129ca26f93f40eb76dcc8bfbb/javascripts/bundle_github.js" type="text/javascript"></script>


    
    <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "paparazzi/paparazzi"
      })
    </script>

    
  <link rel='canonical' href='/paparazzi/paparazzi/blob/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems/gps/gps_skytraq.h'>

  <link href="https://github.com/paparazzi/paparazzi/commits/master.atom" rel="alternate" title="Recent Commits to paparazzi:master" type="application/atom+xml" />

        <meta name="description" content="paparazzi - Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository." />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "paparazzi/paparazzi";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "8237283b4bc6380dee1591f872ca442a86bd52af";
      GitHub.currentPath = 'sw/airborne/subsystems/gps/gps_skytraq.h';
      GitHub.masterBranch = "master";

      
    </script>
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

    
  </head>

  

  <body class="logged_out page-blob linux env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
          <a class="logo boring" href="https://github.com">
            
            <img alt="github" class="default" height="45" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/header/logov6.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" height="45" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/header/logov6-hover.png" />
            <!--<![endif]-->
          </a>
       
        
        <div class="topsearch">
  
    <ul class="nav logged_out">
      
      <li class="pricing"><a href="/plans">Pricing and Signup</a></li>
      
      <li class="explore"><a href="/explore">Explore GitHub</a></li>
      <li class="features"><a href="/features">Features</a></li>
      
      <li class="blog"><a href="/blog">Blog</a></li>
      
      <li class="login"><a href="/login?return_to=%2Fpaparazzi%2Fpaparazzi%2Fblob%2Fmaster%2Fsw%2Fairborne%2Fsubsystems%2Fgps%2Fgps_skytraq.h">Login</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/paparazzi">paparazzi</a> / <strong><a href="/paparazzi/paparazzi">paparazzi</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="/paparazzi/paparazzi/admin" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/paparazzi/paparazzi/toggle_watch" class="minibutton btn-watch " id="watch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'efb8f9d13c7d576e742c952b97c16e084ce72294'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/paparazzi/paparazzi/toggle_watch" class="minibutton btn-watch " id="unwatch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'efb8f9d13c7d576e742c952b97c16e084ce72294'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/paparazzi/paparazzi/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'efb8f9d13c7d576e742c952b97c16e084ce72294'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/paparazzi/paparazzi/watchers" title="Watchers" class="tooltipped downwards">82</a></li>
          <li class="forks"><a href="/paparazzi/paparazzi/network" title="Forks" class="tooltipped downwards">63</a></li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/paparazzi/paparazzi" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/paparazzi/paparazzi/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/paparazzi/paparazzi/network" highlight="repo_network">Network</a></li>
    <li><a href="/paparazzi/paparazzi/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    

    
      
      <li><a href="/paparazzi/paparazzi/issues" highlight="issues">Issues (18)</a></li>
    

            
    <li><a href="/paparazzi/paparazzi/graphs" highlight="repo_graphs">Graphs</a></li>

    

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>master</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="/paparazzi/paparazzi/branches" class="dropdown">Switch Branches (7)</a>
      <ul>
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/HB/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="HB">HB</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/cam/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="cam">cam</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/campaign2010/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="campaign2010">campaign2010</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/dev/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="dev">dev</a></li>
          
        
          
            <li><strong>master &#x2713;</strong></li>
            
          
          
            <li><a href="/paparazzi/paparazzi/blob/new-state-interface/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="new-state-interface">new-state-interface</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/pfd/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="pfd">pfd</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown ">Switch Tags (2)</a>
              <ul>
                      
              <li><a href="/paparazzi/paparazzi/blob/FwYapaXSens/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="FwYapaXSens">FwYapaXSens</a></li>
            
                      
              <li><a href="/paparazzi/paparazzi/blob/FwCHIMU/sw/airborne/subsystems/gps/gps_skytraq.h" data-name="FwCHIMU">FwCHIMU</a></li>
            
                  </ul>
      
    </li>
    <li>
    
    <a href="/paparazzi/paparazzi/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      
        <a href="/paparazzi/paparazzi/downloads" class="download-source" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>
      

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository.
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/paparazzi/paparazzi/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="efb8f9d13c7d576e742c952b97c16e084ce72294" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository.">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://paparazzi.enac.fr" rel="nofollow">http://paparazzi.enac.fr</a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/paparazzi/paparazzi/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="efb8f9d13c7d576e742c952b97c16e084ce72294" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="http://paparazzi.enac.fr">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
      <div class="url-box">
  

  <ul class="clone-urls">
    
      
      <li class="http_clone_url"><a href="https://github.com/paparazzi/paparazzi.git" data-permissions="Read-Only">HTTP</a></li>
      <li class="public_clone_url"><a href="git://github.com/paparazzi/paparazzi.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" class="url-field" />
        <span style="display:none" id="clippy_4846" class="url-box-clippy"></span>
      <span id="clippy_tooltip_clippy_4846" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_4846&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_4846&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p class="url-description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none">
      <div class="breadcrumb">
        <b><a href="/paparazzi/paparazzi">paparazzi</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/paparazzi/paparazzi/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  







<script type="text/javascript">
  GitHub.downloadRepo = '/paparazzi/paparazzi/archives/master'
  GitHub.revType = "master"

  GitHub.repoName = "paparazzi"
  GitHub.controllerName = "blob"
  GitHub.actionName     = "show"
  GitHub.currentAction  = "blob#show"

  
    GitHub.loggedIn = false
  

  
</script>




<div class="flash-messages"></div>


  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/paparazzi/paparazzi/commit/8237283b4bc6380dee1591f872ca442a86bd52af">fix gps callback trigger</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="https://secure.gravatar.com/avatar/63fafa0c91fcc9585572c812c9c6b0ef?s=140&d=https://gs1.wac.edgecastcdn.net/80460E/assets%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/gautierhattenberger">gautierhattenberger</a> <span>(author)</span></div>
        <div class="date">
          <time class="js-relative-date" datetime="2011-07-06T06:54:03-07:00" title="2011-07-06 06:54:03">July 06, 2011</time>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/paparazzi/paparazzi/commit/8237283b4bc6380dee1591f872ca442a86bd52af" class="js-commit-link" data-key="c">8237283b4bc6380dee15</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems" class="js-tree-link" data-key="t">cbf866cb8d15fed87098</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/paparazzi/paparazzi/tree/d6ad10013856056a0ebba3e9913b4339064ec356/sw/airborne/subsystems" class="js-parent-link" data-key="p">d6ad10013856056a0ebb</a>
      

    </div>
  </div>

    </div>
  </div>



  <div id="slider">

  

    <div class="breadcrumb" data-path="sw/airborne/subsystems/gps/gps_skytraq.h/">
      <b><a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af">paparazzi</a></b> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw">sw</a> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne">airborne</a> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems">subsystems</a> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems/gps">gps</a> / gps_skytraq.h       <span style="display:none" id="clippy_4580" class="clippy">sw/airborne/subsystems/gps/gps_skytraq.h</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_4580&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_4580&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="sw/airborne/subsystems/gps/gps_skytraq.h/" data-canonical-url="/paparazzi/paparazzi/blob/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems/gps/gps_skytraq.h">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/paparazzi/paparazzi/edit/__current_ref__/sw/airborne/subsystems/gps/gps_skytraq.h"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>116 lines (92 sloc)</span>
                
                <span>4.615 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/paparazzi/paparazzi/raw/master/sw/airborne/subsystems/gps/gps_skytraq.h" id="raw-url">raw</a></li>
                
                  <li><a href="/paparazzi/paparazzi/blame/master/sw/airborne/subsystems/gps/gps_skytraq.h">blame</a></li>
                
                <li><a href="/paparazzi/paparazzi/commits/master/sw/airborne/subsystems/gps/gps_skytraq.h">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Copyright (C) 2010 Antoine Drouin &lt;poinix@gmail.com&gt;</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * This file is part of paparazzi.</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> * paparazzi is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC7'><span class="cm"> * it under the terms of the GNU General Public License as published by</span></div><div class='line' id='LC8'><span class="cm"> * the Free Software Foundation; either version 2, or (at your option)</span></div><div class='line' id='LC9'><span class="cm"> * any later version.</span></div><div class='line' id='LC10'><span class="cm"> *</span></div><div class='line' id='LC11'><span class="cm"> * paparazzi is distributed in the hope that it will be useful,</span></div><div class='line' id='LC12'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC13'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC14'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC15'><span class="cm"> *</span></div><div class='line' id='LC16'><span class="cm"> * You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC17'><span class="cm"> * along with paparazzi; see the file COPYING.  If not, write to</span></div><div class='line' id='LC18'><span class="cm"> * the Free Software Foundation, 59 Temple Place - Suite 330,</span></div><div class='line' id='LC19'><span class="cm"> * Boston, MA 02111-1307, USA.</span></div><div class='line' id='LC20'><span class="cm"> */</span></div><div class='line' id='LC21'><br/></div><div class='line' id='LC22'><span class="cp">#ifndef GPS_SKYTRAQ_H</span></div><div class='line' id='LC23'><span class="cp">#define GPS_SKYTRAQ_H</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#include &quot;mcu_periph/uart.h&quot;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cp">#define SKYTRAQ_SYNC1 0xA0</span></div><div class='line' id='LC28'><span class="cp">#define SKYTRAQ_SYNC2 0xA1</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="cp">#define SKYTRAQ_SYNC3 0x0D</span></div><div class='line' id='LC31'><span class="cp">#define SKYTRAQ_SYNC4 0x0A</span></div><div class='line' id='LC32'><br/></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="cp">#define SKYTRAQ_ID_NAVIGATION_DATA 0XA8</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_FixMode(_payload) (uint8_t) (*((uint8_t*)_payload+2-2))</span></div><div class='line' id='LC37'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_NumSV(_payload)   (uint8_t) (*((uint8_t*)_payload+3-2))</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="cp">//#define SKYTRAQ_NAVIGATION_DATA_TOW(_payload)     (uint32_t)(_payload[7] + (((uint32_t)_payload[6])&lt;&lt;8) + (((uint32_t)_payload[5])&lt;&lt;16) + (((uint32_t)_payload[4])&lt;&lt;24))</span></div><div class='line' id='LC40'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_TOW(_payload)     __builtin_bswap32(*(uint32_t*)&amp;_payload[ 6-2])</span></div><div class='line' id='LC41'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_LAT(_payload)     __builtin_bswap32(*( int32_t*)&amp;_payload[10-2])</span></div><div class='line' id='LC42'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_LON(_payload)     __builtin_bswap32(*( int32_t*)&amp;_payload[14-2])</span></div><div class='line' id='LC43'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_AEL(_payload)     __builtin_bswap32(*(uint32_t*)&amp;_payload[18-2])</span></div><div class='line' id='LC44'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ASL(_payload)     __builtin_bswap32(*(uint32_t*)&amp;_payload[22-2])</span></div><div class='line' id='LC45'><span class="cp">//#define SKYTRAQ_NAVIGATION_DATA_GDOP(_payload)    __builtin_bswap16(*(uint16_t*)&amp;_payload[26-2])</span></div><div class='line' id='LC46'><span class="cp">//#define SKYTRAQ_NAVIGATION_DATA_PDOP(_payload)    __builtin_bswap(*(uint16_t*)&amp;_payload[28-2])</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ECEFX(_payload)   __builtin_bswap32(*( int32_t*)&amp;_payload[36-2])</span></div><div class='line' id='LC49'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ECEFY(_payload)   __builtin_bswap32(*( int32_t*)&amp;_payload[40-2])</span></div><div class='line' id='LC50'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ECEFZ(_payload)   __builtin_bswap32(*( int32_t*)&amp;_payload[44-2])</span></div><div class='line' id='LC51'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ECEFVX(_payload)  __builtin_bswap32(*( int32_t*)&amp;_payload[48-2])</span></div><div class='line' id='LC52'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ECEFVY(_payload)  __builtin_bswap32(*( int32_t*)&amp;_payload[52-2])</span></div><div class='line' id='LC53'><span class="cp">#define SKYTRAQ_NAVIGATION_DATA_ECEFVZ(_payload)  __builtin_bswap32(*( int32_t*)&amp;_payload[56-2])</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'><br/></div><div class='line' id='LC57'><span class="cp">/* last error type */</span></div><div class='line' id='LC58'><span class="cp">#define GPS_SKYTRAQ_ERR_NONE         0</span></div><div class='line' id='LC59'><span class="cp">#define GPS_SKYTRAQ_ERR_OVERRUN      1</span></div><div class='line' id='LC60'><span class="cp">#define GPS_SKYTRAQ_ERR_MSG_TOO_LONG 2</span></div><div class='line' id='LC61'><span class="cp">#define GPS_SKYTRAQ_ERR_CHECKSUM     3</span></div><div class='line' id='LC62'><span class="cp">#define GPS_SKYTRAQ_ERR_OUT_OF_SYNC  4</span></div><div class='line' id='LC63'><span class="cp">#define GPS_SKYTRAQ_ERR_UNEXPECTED   5</span></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'><span class="cp">#define GPS_SKYTRAQ_MAX_PAYLOAD 255</span></div><div class='line' id='LC66'><span class="k">struct</span> <span class="n">GpsSkytraq</span> <span class="p">{</span></div><div class='line' id='LC67'>&nbsp;&nbsp;<span class="kt">uint8_t</span> <span class="n">msg_buf</span><span class="p">[</span><span class="n">GPS_SKYTRAQ_MAX_PAYLOAD</span><span class="p">]</span> <span class="n">__attribute__</span> <span class="p">((</span><span class="n">aligned</span><span class="p">));</span></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="n">bool_t</span>  <span class="n">msg_available</span><span class="p">;</span></div><div class='line' id='LC69'>&nbsp;&nbsp;<span class="kt">uint8_t</span> <span class="n">msg_id</span><span class="p">;</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'>&nbsp;&nbsp;<span class="kt">uint8_t</span>  <span class="n">status</span><span class="p">;</span></div><div class='line' id='LC72'>&nbsp;&nbsp;<span class="kt">uint16_t</span> <span class="n">len</span><span class="p">;</span></div><div class='line' id='LC73'>&nbsp;&nbsp;<span class="kt">uint8_t</span>  <span class="n">msg_idx</span><span class="p">;</span></div><div class='line' id='LC74'>&nbsp;&nbsp;<span class="kt">uint8_t</span>  <span class="n">checksum</span><span class="p">;</span></div><div class='line' id='LC75'>&nbsp;&nbsp;<span class="kt">uint8_t</span>  <span class="n">error_cnt</span><span class="p">;</span></div><div class='line' id='LC76'>&nbsp;&nbsp;<span class="kt">uint8_t</span>  <span class="n">error_last</span><span class="p">;</span></div><div class='line' id='LC77'><span class="p">};</span></div><div class='line' id='LC78'><br/></div><div class='line' id='LC79'><span class="k">extern</span> <span class="k">struct</span> <span class="n">GpsSkytraq</span> <span class="n">gps_skytraq</span><span class="p">;</span></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'><span class="cm">/*</span></div><div class='line' id='LC83'><span class="cm"> * This part is used by the autopilot to read data from a uart</span></div><div class='line' id='LC84'><span class="cm"> */</span></div><div class='line' id='LC85'><span class="cp">#define __GpsLink(dev, _x) dev##_x</span></div><div class='line' id='LC86'><span class="cp">#define _GpsLink(dev, _x)  __GpsLink(dev, _x)</span></div><div class='line' id='LC87'><span class="cp">#define GpsLink(_x) _GpsLink(GPS_LINK, _x)</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="cp">#define GpsBuffer() GpsLink(ChAvailable())</span></div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'><span class="cp">#define GpsEvent(_sol_available_callback) {                     \</span></div><div class='line' id='LC92'><span class="cp">    if (GpsBuffer()) {                                          \</span></div><div class='line' id='LC93'><span class="cp">      ReadGpsBuffer();                                          \</span></div><div class='line' id='LC94'><span class="cp">    }                                                           \</span></div><div class='line' id='LC95'><span class="cp">    if (gps_skytraq.msg_available) {                            \</span></div><div class='line' id='LC96'><span class="cp">      gps_skytraq_read_message();                               \</span></div><div class='line' id='LC97'><span class="cp">      if (gps_skytraq.msg_id == SKYTRAQ_ID_NAVIGATION_DATA) {	\</span></div><div class='line' id='LC98'><span class="cp">        if (gps.fix == GPS_FIX_3D)                              \</span></div><div class='line' id='LC99'><span class="cp">          gps.last_fix_time = cpu_time_sec;                     \</span></div><div class='line' id='LC100'><span class="cp">        _sol_available_callback();                              \</span></div><div class='line' id='LC101'><span class="cp">      }                                                         \</span></div><div class='line' id='LC102'><span class="cp">      gps_skytraq.msg_available = FALSE;                        \</span></div><div class='line' id='LC103'><span class="cp">    }                                                           \</span></div><div class='line' id='LC104'><span class="cp">  }</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'><span class="cp">#define ReadGpsBuffer() {						\</span></div><div class='line' id='LC107'><span class="cp">    while (GpsLink(ChAvailable())&amp;&amp;!gps_skytraq.msg_available)	\</span></div><div class='line' id='LC108'><span class="cp">      gps_skytraq_parse(GpsLink(Getch()));				\</span></div><div class='line' id='LC109'><span class="cp">  }</span></div><div class='line' id='LC110'><br/></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><span class="k">extern</span> <span class="kt">void</span> <span class="n">gps_skytraq_read_message</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC113'><span class="k">extern</span> <span class="kt">void</span> <span class="n">gps_skytraq_parse</span><span class="p">(</span><span class="kt">uint8_t</span> <span class="n">c</span><span class="p">);</span></div><div class='line' id='LC114'><br/></div><div class='line' id='LC115'><span class="cp">#endif </span><span class="cm">/* GPS_SKYTRAQ_H */</span><span class="cp"></span></div><div class='line' id='LC116'><br/></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;">
  <img src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <div id="footer" class="clearfix">
      <div class="site">
        
          <div class="sponsor">
            <a href="http://www.rackspace.com" class="logo">
              <img alt="Dedicated Server" height="36" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/footer/rackspace_logo.png?v2" width="38" />
            </a>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
        

        <ul class="links">
          
            <li class="blog"><a href="https://github.com/blog">Blog</a></li>
            <li><a href="https://github.com/about">About</a></li>
            <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
            <li><a href="https://github.com/training">Training</a></li>
            <li><a href="http://jobs.github.com">Job Board</a></li>
            <li><a href="http://shop.github.com">Shop</a></li>
            <li><a href="http://developer.github.com">API</a></li>
            <li><a href="http://status.github.com">Status</a></li>
          
        </ul>
        <ul class="sosueme">
          <li class="main">&copy; 2011 <span id="_rrt" title="0.11671s from fe6.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
          <li><a href="/site/terms">Terms of Service</a></li>
          <li><a href="/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
        </ul>
      </div>
    </div><!-- /#footer -->

    <script>window._auth_token = "efb8f9d13c7d576e742c952b97c16e084ce72294"</script>
    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>t</dt>
        <dd>Open tree</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>p</dt>
        <dd>Open parent</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:
> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>
    

    <!--[if IE 8]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie8")
    </script>
    <![endif]-->

    <!--[if IE 7]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie7")
    </script>
    <![endif]-->

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/14/eum/rum.js	";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0.0,112,new Date().getTime()])</script>
  </body>
</html>

